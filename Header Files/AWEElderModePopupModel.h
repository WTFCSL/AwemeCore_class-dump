//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEElderModePopupModel : MTLModel <MTLJSONSerializing> {
    NSString *_leftBtnText;
    NSString *_rightBtnText;
    NSArray *_valuePoints;
    long long _frequencyDailyCtrl;
    long long _newUserPopAt;
    NSString *_title;
}

@property (readonly, copy, nonatomic) NSString *leftBtnText;
@property (readonly, copy, nonatomic) NSString *rightBtnText;
@property (readonly, copy, nonatomic) NSArray *valuePoints;
@property (readonly, nonatomic) long long frequencyDailyCtrl;
@property (readonly, nonatomic) long long newUserPopAt;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valuePointsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)valuePoints;
- (long long)newUserPopAt;
- (long long)frequencyDailyCtrl;
- (id)leftBtnText;
- (id)rightBtnText;
- (void).cxx_destruct;
- (id)title;

@end