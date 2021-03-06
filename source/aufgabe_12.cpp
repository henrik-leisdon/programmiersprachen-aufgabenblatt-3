#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
#include <algorithm>
#include <vector>



TEST_CASE("filter alle Vielfache von 3"){

    std::vector<int> v_1{1,2,3,4,5,6,7,8,9};
    std::vector<int> v_2{9,8,7,6,5,4,3,2,1};
    std::vector<int> v_3{9};

    if(v_1.size() != v_3.size() && v_2.size() != v_3.size()){
        std::transform(v_1.begin(),v_1.end(),v_2.begin(),v_3.begin(),[](int a, int b)
            {return a+b;
            });
        }
    REQUIRE(std::all_of(v_3.begin(),v_3.end(),[](int a){return a == 10;}));


}

int main(int argc, char* argv[]){ 
    return Catch::Session().run(argc,argv);
   };




/*


*/