#include <stdio.h>
#include <time.h>

void bubble_sort(int vetor[], int tam) {
  int proximo = 0;

  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < (tam - 1); j++) {
      if(vetor[j] > vetor[j + 1]) {
        proximo = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = proximo;
      }
    }
  }
}

int main() {
  int vetor[1000] = {3497,3005,2126,4279,5000,3896,1463,1038,4540,2329,580,3739,1622,2158,4444,3437,2331,716,4019,1931,3935,1689,1933,2371,333,2856,880,131,4108,2413,1849,2247,3597,4631,2502,3403,81,505,4083,2071,1342,4769,3558,3874,3314,4463,1669,2702,1062,3227,2183,3398,4388,3442,4031,4299,4662,4126,4700,3471,4390,2527,4897,3621,268,744,921,4727,3478,3172,4426,3772,3950,3029,1269,1272,1936,1208,3123,1684,576,1166,4795,1633,4113,395,1615,2782,4806,1617,668,516,3540,703,601,2203,1952,1185,4973,3781,4402,3588,3184,879,4969,1435,1696,1204,1389,1795,84,3108,4168,3455,1312,4554,1908,1534,907,2609,1708,1096,1890,3860,2102,4815,1072,898,3735,2637,2500,1563,3659,1193,4854,1728,905,1660,3028,4363,498,885,4141,1431,4922,3245,2121,1744,4616,4466,1349,3198,4757,4809,4863,4242,566,755,4755,2961,3813,2418,1297,202,3720,955,3527,300,2514,897,720,4161,711,2622,1207,206,4194,3903,682,751,1816,3868,2268,4830,1214,1217,2918,2040,2687,3353,1151,4025,124,1810,2881,4516,4786,2826,1833,4569,4193,846,2925,607,413,1700,2096,2165,3074,1764,586,357,710,1951,2937,3859,253,2484,1596,2145,1901,1923,2042,350,1394,2344,1128,3544,4799,2601,1589,644,2077,1853,1361,3259,1738,2587,2731,1301,1884,2170,913,1514,4508,572,1089,1993,1785,4475,1355,2244,4694,2701,2275,1546,1279,1014,1017,1692,1420,2356,3366,4808,3652,1405,3890,1385,1699,2526,2795,4468,1989,647,2721,2933,4321,3328,820,4051,1558,1417,2652,1367,2787,1784,3889,2895,574,4317,3745,4275,4139,3589,4080,16,622,3360,1473,3986,2400,2593,1893,4220,1248,2836,625,3042,83,4901,517,2459,1462,3534,3302,3188,2343,1282,3024,2292,3477,2707,3993,1247,3256,3102,2884,2600,151,2188,3585,792,2043,2391,4622,2190,4658,784,378,281,1046,30,3631,2853,1937,4991,4017,15,2326,137,3574,1564,3120,3833,1745,1583,2240,3910,3911,1259,3854,1242,3954,2243,1359,1748,3213,1817,3835,1723,916,4404,1786,2099,3138,2766,4397,1257,3400,3521,3887,3992,4923,4893,477};

  clock_t inicio, fim;
  double tempo_execucao;

  inicio = clock();

  bubble_sort(vetor, 1000);

  for(int i = 0; i < 1000; i++) {
    printf("%d\n", vetor[i]);
  }

  fim = clock(); 
  tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
  
  printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);

  return 0;
}
