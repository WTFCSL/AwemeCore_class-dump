//
//     Generated by private class-dump
//

@class NSString, AFDPublishCloseFriendsResponseModel;

@interface AFDPublishCloseFriendsDataController : AWEListDataController {
    NSString *_awemeID;
    AFDPublishCloseFriendsResponseModel *_responseModel;
}

@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) AFDPublishCloseFriendsResponseModel *responseModel;

- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (id)initWithAwemeID:(id)arg0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (id)responseModel;
- (void)setResponseModel:(id)arg0;

@end