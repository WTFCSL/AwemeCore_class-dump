//
//     Generated by private class-dump
//

@class AWEUserModel;

@interface AWEGuestHomeUserProfileResponseModel : AWEBaseApiModel {
    AWEUserModel *_userModel;
}

@property (retain, nonatomic) AWEUserModel *userModel;

+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;

@end
