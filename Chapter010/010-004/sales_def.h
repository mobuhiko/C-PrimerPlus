#ifndef SALES_DEF_H_INCLUDED
#define SALES_DEF_H_INCLUDED

namespace SALES
{
    const int QUARTERS = 4;

    class Sales
    {
        private:
            double sales[QUARTERS];
            double average();
            double max();
            double min();
        public:
            Sales(const double ar[], int n);
            Sales();
            void showSales();
    };
}

#endif // SALES_DEF_H_INCLUDED
