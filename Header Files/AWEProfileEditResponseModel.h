//
//     Generated by private class-dump
//

@class AWEProfileEditResponseToastBackInfo, NSString, NSDictionary, NSNumber, AWEUserModel;

@interface AWEProfileEditResponseModel : AWEBaseApiModel {
    AWEUserModel *_user;
    NSNumber *_toastBack;
    NSString *_verifyType;
    NSDictionary *_dialog;
    AWEProfileEditResponseToastBackInfo *_toastBackInfo;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *toastBack;
@property (copy, nonatomic) NSString *verifyType;
@property (retain, nonatomic) NSDictionary *dialog;
@property (retain, nonatomic) AWEProfileEditResponseToastBackInfo *toastBackInfo;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toastBack;
- (void)setToastBack:(id)arg0;
- (id)toastBackInfo;
- (void)setToastBackInfo:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)verifyType;
- (void)setVerifyType:(id)arg0;
- (id)dialog;
- (void)setDialog:(id)arg0;

@end