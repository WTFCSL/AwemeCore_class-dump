//
//     Generated by private class-dump
//

@class NSString, NSArray, NSError, AWEIMChatListServiceExtTrackerModel;

@interface AWEIMChatListServiceResponseModel : NSObject {
    BOOL _hasMore;
    NSString *_uid;
    long long _reason;
    long long _serviceType;
    NSArray *_serviceListModels;
    NSError *_error;
    AWEIMChatListServiceExtTrackerModel *_trackerModel;
}

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long reason;
@property (nonatomic) long long serviceType;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *serviceListModels;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEIMChatListServiceExtTrackerModel *trackerModel;

- (void)setServiceListModels:(id)arg0;
- (id)serviceListModels;
- (id)trackerModel;
- (void)setTrackerModel:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (void).cxx_destruct;
- (long long)reason;
- (long long)serviceType;
- (void)setServiceType:(long long)arg0;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setReason:(long long)arg0;
- (void)setError:(id)arg0;
- (id)description;
- (id)error;

@end
