//
//     Generated by private class-dump
//

@class NSString;

@protocol IESECShopAfterLiveCardProviderService <NSObject>

+ (id)makeProviderWithTracker:(id)arg0;

@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *cid;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)isOtherChannel;
- (id)enterFromMerge;
- (void)setEnterFromMerge:(id)arg0;
- (void)setIsOtherChannel:(id)arg0;
- (id)shopAfterLiveCardWithData:(id)arg0 containerWidth:(double)arg1;
- (void)setRequestID:(id)arg0;
- (id)requestID;
- (id)cid;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;
- (void)setCid:(id)arg0;

@end