//
//     Generated by private class-dump
//

@interface BDPReddotManager : NSObject

@property (nonatomic) BOOL isReddotExist;

+ (id)sharedInstance;

- (BOOL)isReddotExist;
- (void)requestNewestReplyIfNeedWithCompletion:(id /* block */)arg0;
- (id)createDotView;
- (id)p_getUserId;
- (void)p_setReddotInfosWithWriteType:(unsigned long long)arg0 isExist:(BOOL)arg1 lastExistTime:(id)arg2 lastRequestTime:(id)arg3;
- (void)setIsReddotExist:(BOOL)arg0;

@end