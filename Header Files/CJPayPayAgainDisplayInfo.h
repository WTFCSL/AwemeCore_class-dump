//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface CJPayPayAgainDisplayInfo : JSONModel {
    BOOL _isCombinePayAgain;
    NSArray *_recPayTypeIndexList;
    NSString *_guideTitle;
    long long _failPayTypeIndex;
    NSString *_topRightDesc;
    NSString *_superLink;
}

@property (copy, nonatomic) NSArray *recPayTypeIndexList;
@property (copy, nonatomic) NSString *guideTitle;
@property (nonatomic) BOOL isCombinePayAgain;
@property (nonatomic) long long failPayTypeIndex;
@property (copy, nonatomic) NSString *topRightDesc;
@property (copy, nonatomic) NSString *superLink;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)guideTitle;
- (void)setGuideTitle:(id)arg0;
- (id)recPayTypeIndexList;
- (void)setRecPayTypeIndexList:(id)arg0;
- (BOOL)isCombinePayAgain;
- (void)setIsCombinePayAgain:(BOOL)arg0;
- (long long)failPayTypeIndex;
- (void)setFailPayTypeIndex:(long long)arg0;
- (id)topRightDesc;
- (void)setTopRightDesc:(id)arg0;
- (id)superLink;
- (void)setSuperLink:(id)arg0;
- (void).cxx_destruct;

@end
