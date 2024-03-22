//
//     Generated by private class-dump
//

@class NSString;
@protocol WeiboSDKRequestDelegate;

@interface WBBaseRequest : WBDataTransferObject {
    NSString *requestID;
    id<WeiboSDKRequestDelegate> delegate;
}

@property (retain, nonatomic) NSString *requestID;
@property (weak, nonatomic) id<WeiboSDKRequestDelegate> delegate;

+ (id)mappedObjectWithDictionary:(id)arg0;
+ (Class)associateResponseClass;
+ (id)request;
+ (void)nothing;
+ (id)transferType;

- (BOOL)canAssociateWithResponse:(id)arg0;
- (BOOL)canNotHandleByWeiboClientApp;
- (void)storeToDictionary:(id)arg0;
- (BOOL)canHandleByWeiboClientApp;
- (id)objectID;
- (void)setObjectID:(id)arg0;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)loadFromDictionary:(id)arg0;

@end