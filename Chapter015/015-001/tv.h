#ifndef TV_H_INCLUDED
#define TV_H_INCLUDED

// tv.h -- Tv and Remote classes
class Tv
{
    friend class Remote;
public:
    enum {Off, On};
    enum {MinVal,MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() {state = (state == On)? Off : On;}
    bool ison() const {return state == On;}
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() {mode = (mode == Antenna)? Cable : Antenna;}
    void set_input() {input = (input == TV)? DVD : TV;}
    void settings() const; // display all settings
    void change_r_mode(Remote & r);
private:
    int state;             // on or off
    int volume;            // assumed to be digitized
    int maxchannel;        // maximum number of channels
    int channel;           // current channel setting
    int mode;              // broadcast or cable
    int input;             // TV or DVD
};

class Remote
{
    friend class Tv;
private:
    int mode;              // controls TV or DVD
    int r_mode;
    enum { Normal, Interactive };
public:
    Remote(int m = Tv::TV) : mode(m) {}
    bool volup(Tv & t) { return t.volup();}
    bool voldown(Tv & t) { return t.voldown();}
    void onoff(Tv & t) { t.onoff(); }
    void chanup(Tv & t) {t.chanup();}
    void chandown(Tv & t) {t.chandown();}
    void set_chan(Tv & t, int c) {t.channel = c;}
    void set_mode(Tv & t) {t.set_mode();}
    void set_input(Tv & t) {t.set_input();}

    void show_normal_or_interact() const { std::cout << (r_mode == Normal ? "Normal" : "Interactive"); }
};

inline void Tv::change_r_mode(Remote& r)
{
    if (Tv::state == Off)
        return;

    if (ison())
    {
        if (r.r_mode == Remote::Normal)
            r.r_mode = Remote::Interactive;
        else
            r.r_mode = Remote::Normal;
    }
    else
    {
        return;
    }
}

#endif // TV_H_INCLUDED
