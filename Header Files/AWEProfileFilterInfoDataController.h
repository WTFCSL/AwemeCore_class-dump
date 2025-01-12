//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHttpTask;

@interface AWEProfileFilterInfoDataController : NSObject {
    NSString *_secUserID;
    NSString *_userID;
    long long _scene;
    id<AWEHttpTask> _httpTask;
}

@property (retain, nonatomic) id<AWEHttpTask> httpTask;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long scene;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)setHttpTask:(id)arg0;
- (id)httpTask;
- (void)fetchFilterInfo:(id)arg0 completion:(id /* block */)arg1;
- (id)userID;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (long long)scene;

@end
