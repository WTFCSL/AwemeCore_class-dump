//
//     Generated by private class-dump
//

@interface RPSecurity : NSObject

+ (id)RP_DESEnc:(id)arg0 key:(id)arg1 iv:(id)arg2 type:(id)arg3;
+ (id)RP_DESDec:(id)arg0 key:(id)arg1 iv:(id)arg2 type:(id)arg3;
+ (id)RP_getK_ENC:(id)arg0;
+ (id)RP_getK_MAC:(id)arg0;
+ (id)RP_3DESDecrypt:(id)arg0 key:(id)arg1;
+ (id)RP_3DESEncrypt:(id)arg0 key:(id)arg1;
+ (int)DM_AscToHex:(char *)arg0 pSrc:(char *)arg1 nSrcLen:(int)arg2;
+ (id)RPSha1WithHexStr:(id)arg0;
+ (id)DESParity:(id)arg0;
+ (id)numToHex:(long long)arg0;
+ (id)RP_DESEncrypt:(id)arg0 key:(id)arg1 iv:(id)arg2 type:(id)arg3;
+ (id)RP_DESDecrypt:(id)arg0 key:(id)arg1 iv:(id)arg2 type:(id)arg3;

@end
