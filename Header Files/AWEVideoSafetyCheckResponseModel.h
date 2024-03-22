//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoSafetyCheckResponseModel : AWEBaseApiModel {
    long long _safetyCode;
    NSString *_safetyMsg;
    NSString *_itemId;
}

@property (nonatomic) long long safetyCode;
@property (copy, nonatomic) NSString *safetyMsg;
@property (copy, nonatomic) NSString *itemId;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)safetyCode;
- (void)setSafetyCode:(long long)arg0;
- (id)safetyMsg;
- (void)setSafetyMsg:(id)arg0;
- (void).cxx_destruct;
- (id)itemId;
- (void)setItemId:(id)arg0;

@end
