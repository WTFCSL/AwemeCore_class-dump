//
//     Generated by private class-dump
//

@interface AWEPayCommonUtil : NSObject

+ (BOOL)isPPEEnv;
+ (id)currentNetType;
+ (double)currentServerTime;
+ (void)saveCJPayCache:(id)arg0 key:(id)arg1;
+ (void)setAwe_redPacketInfo:(id)arg0 msg:(id)arg1;
+ (id)defaultRedPacketTitleWithFansCreatorStyle:(BOOL)arg0;
+ (long long)followStatusWithUserId:(id)arg0;
+ (id)awe_redPacketInfo:(id)arg0;
+ (BOOL)isBOEEvn;
+ (id)boeSuffix;
+ (void)transferToUrlString:(id)arg0;
+ (id)merchantIDWithProductType:(unsigned long long)arg0;
+ (id)getDisplayNameWithUid:(id)arg0 secUid:(id)arg1 conversationId:(id)arg2;
+ (void)transferToUserProfileWitUserID:(id)arg0;
+ (BOOL)awepay_isAuthorService:(id)arg0;
+ (void)openSchema:(id)arg0 callback:(id /* block */)arg1;

@end