// The proposed Tausworthe generators using fast state transition
// Implemented by Shin Harase

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int rng5(void); /* 4^5-1 */
unsigned int rng6(void); /* 4^6-1 */
unsigned int rng7(void); /* 4^7-1 */
unsigned int rng8(void); /* 4^8-1 */
unsigned int rng9(void); /* 4^9-1 */
unsigned int rng10(void); /* 4^10-1 */
unsigned int rng11(void); /* 4^10-1 */

static unsigned int state5 = 0x86981809U;
static unsigned int state6 = 0xcfc8f6c0U;
static unsigned int state7 = 0xc7f8de0aU;
static unsigned int state8 = 0xa2f44595U;
static unsigned int state9 = 0xac9ac551U;
static unsigned int state10 = 0x71138a34U;
static unsigned int state11 = 0x7d562c2cU;

/* 4^5-1 */
unsigned int rng5(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[10] = {
    0xfc553b29U, 0xa8ff2617U, 0x434075e3U, 0xc2c0ef92U, 0x782f3b6fU, 
    0xe41a26daU, 0x4aa1d3e5U, 0xc553b29fU, 0x52a874f9U, 0xf154eca7U
 };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<10; i++) {
    if ((state5 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state5 = x;

  return state5;
}

/* 4^6-1 */
unsigned int rng6(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[12] = {
    0xa519447bU, 0x5f37cce6U, 0x9368d983U, 0x72d4b742U, 0x64da3660U, 
    0xdcb52dd0U, 0x63180505U, 0xd2340f0fU, 0xa2e889dcU, 0x519447b8U, 
    0xe8ba2277U, 0x946511eeU
 };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<12; i++) {
    if ((state6 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state6 = x;

  return state6;
}

/* 4^7-1 */
unsigned int rng7(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[14] = {
    0x3de15e04U, 0x2b93f90cU, 0x190af089U, 0x3705a047U, 0x4642bc22U, 
    0xcdc16811U, 0x6c71f10cU, 0xd8e3a308U, 0xcd6edb4bU, 0x8bd9b6c6U, 
    0x4ebae8d6U, 0xc96594bdU, 0xae4fe431U, 0x59ca9c23U
    };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<14; i++) {
    if ((state7 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state7 = x;

  return state7;
}

/* 4^8-1 */
unsigned int rng8(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[16] = {
    0xa4d55826U, 0x5cbff41dU, 0x915ffa32U, 0x73faa521U, 0xb8e80a91U, 
    0x64940573U, 0xb285f6b9U, 0x614fad67U, 0x2ca17daeU, 0x1853eb59U, 
    0x2ffd074dU, 0x1aab0ecbU, 0xcbff41d3U, 0x86aac3b2U, 0x72ffd074U, 
    0xe1aab0ecU
 };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<16; i++) {
    if ((state8 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state8 = x;

  return state8;
}
/* 4^9-1 */
unsigned int rng9(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[18] = {
    0xd368c3d9U, 0xb2d482b7U, 0xa7b2f32fU, 0x5e61a21aU, 0x9b383e7cU, 
    0x762429e8U, 0x66ce0f9fU, 0xdd890a7aU, 0x780fc289U, 0xe40a8147U, 
    0x6cd77215U, 0xd8bee13fU, 0xe9e15e32U, 0x9793f921U, 0x1bc416e2U, 
    0x368c3d91U, 0x86f105b8U, 0x4da30f64U
 };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<18; i++) {
    if ((state9 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state9 = x;

  return state9;
}

/* 4^10-1 */
unsigned int rng10(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[20] = {
    0x7d7a660eU, 0xebe5dd09U, 0x9c12284U, 0x783114cU, 0x3f0a2eafU, 0x2a05195aU, 
    0xcfc28babU, 0x8a814656U, 0x98157fe3U, 0x743fea92U, 0x309ae4ffU, 0x20759caaU, 
    0x8c26b93fU, 0x481d672aU, 0xa309ae4fU, 0x520759caU, 0xbe5dd094U, 0x69fbb07cU, 
    0xaf977425U, 0x5a7eec1fU
 };

  t = 0x80000000U;
  x = 0U;
  for (i=0; i<20; i++) {
    if ((state10 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state10 = x;

  return state10;
}

/* 4^11-1 */
unsigned int rng11(void)
{
  int i;
  unsigned int x,t;
  unsigned int mat[22] = {
    0x681b0c7cU, 0xd43608e8U, 0xce30cbf7U, 0x892086aeU, 0x4fa13669U, 
    0xca532dd7U, 0xfbf341e6U, 0xa6a2c39dU, 0xeacad891U, 0x9585b473U, 
    0x52a9ba58U, 0xf15765f4U, 0xa8876a02U, 0x544ed501U, 0x423ad6fcU, 
    0xc125bda8U, 0xb895b9c3U, 0x647f6782U, 0x92086ae4U, 0x7104d59cU, 
    0xf0b41251U, 0xa06c31f3U
 };


  t = 0x80000000U;
  x = 0U;
  for (i=0; i<22; i++) {
    if ((state11 & t) != 0)
      x ^= mat[i];
    t >>= 1;
  }
  state11 = x;

  return state11;
}

unsigned int rng(int i)
{
	switch(i){
		case 5: 
			return rng5();
			break;
    case 6: 
			return rng6();
			break;
    case 7: 
			return rng7();
			break;
    case 8: 
			return rng8();
			break;
    case 9: 
			return rng9();
			break;
    case 10: 
			return rng10();
			break;
    case 11: 
			return rng11();
			break;
		default:
			printf("m Should be between [5, 11] \n");
			return 0;
	}
}

int main(int argc,char *argv[])
{
  unsigned int i;
  unsigned int m, N;
  
  m = atoi(argv[1]);
  N = (unsigned int)pow(4,m); // N = 4^m
  
  for(i = 0; i < N-1; i++) printf("%10.8f\n", rng(m)*(1.0/4294967296.0));

  return 0;
}