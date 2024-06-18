#include <iostream>

float mean_x= 0.0;
float mean_y =0.0;
float sum_of_pro = 0.0;
float sum_of_square=0.0;
float slope = 0.0;
float c_intercept = 0.0;
int size_of_array =0;
float line_y[0];
float ssr[0];
float sst[0];
float r2_score_1 = 0.0;



class Linear_regression{

    public:


        template <typename T>

        void data_to_train(const T& x,const T& y);
        void topredict(auto predict);
        void r2_score(auto y);
        void version();
        void about();
};


void Linear_regression::about(){

    std::cout<<"This is a library of Linear Regression developed by om badhe (software engineer) and its on a early stage right now!";

}
void Linear_regression::version(){

    std::cout<<"1.0";
}
//r2_score

void Linear_regression::r2_score(auto y){
    float ssr[0+size_of_array];
    float ssr_store = 0.0,sst_store = 0.0;
    float sst[0+size_of_array];
    float total_ssr = 0.0 , total_sst = 0.0;

    for(int d =0;d<size_of_array;d++){

        ssr_store = y[d] - line_y[d];
        ssr_store = ssr_store * ssr_store;

        ssr[d] = ssr_store;


    }
    for(int sum_ssr =0 ;sum_ssr<size_of_array;sum_ssr++){

        total_ssr += ssr[sum_ssr];
    }

    for(int e =0;e<size_of_array;e++){
        sst_store = y[e] - mean_y;

        sst_store = sst_store * sst_store;
        sst[e] = sst_store;
    }

    for(int sum_sst =0 ;sum_sst<size_of_array;sum_sst++){

        total_sst += ssr[sum_sst];
    }

    r2_score_1 = 1 - total_ssr/total_sst;

    std::cout<<r2_score_1;

}
//prediction of random variable

void Linear_regression::topredict(auto predict){

    float y = 0.0 ;

    y = slope*predict + c_intercept;



}
void regression_process(auto x,auto y,int total_ele){


    float val_x = 0.0;
    float val_y = 0.0;
    float mul_value;
    float vals_x=0.0;
    float sump[total_ele];
    float square_x=0.0;
    float sums[total_ele];
    float predict_y =0.0;
    x[0+total_ele];
    y[0+total_ele];
    line_y[0+total_ele];

    //mean of x
    for(int i=0;i<total_ele;i++){

        mean_x +=x[i];

    }


    mean_x = mean_x/total_ele;
    //mean of y
    for(int j = 0;j<total_ele;j++){
        mean_y += y[j];
    }
    mean_y = mean_y/total_ele;

    for(int c= 0;c<total_ele;c++){

        val_x = x[c] - mean_x;
        val_y = y[c] - mean_y;
        mul_value = val_x * val_y;
        sump[c] = mul_value;

    }
    for(int g=0;g<total_ele;g++){

        sum_of_pro +=sump[g];
    }



    for(int k=0;k<total_ele;k++){

        vals_x = x[k] - mean_x;
        square_x = vals_x * vals_x;
        sums[k] = square_x;


    }

    for(int s=0;s<total_ele;s++){

        sum_of_square +=sums[s];

    }


    slope = sum_of_pro/sum_of_square;
    c_intercept = mean_y - slope * mean_x;

     for(int b=0;b<total_ele;b++){

        predict_y = slope * x[b] + c_intercept;
        line_y[b] = predict_y;

    }




}

template <typename T>

void Linear_regression::data_to_train(const T& x,const T& y){

    int total_ele =0;
    for(auto i:x){
        total_ele++;

    }
    size_of_array = total_ele;
    regression_process(x,y,total_ele);


}



