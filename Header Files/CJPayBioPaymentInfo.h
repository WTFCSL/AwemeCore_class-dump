//
//     Generated by private class-dump
//

@class NSString, NSArray;
@protocol CJPayBioPaymentSubGuideModel;

@interface CJPayBioPaymentInfo : JSONModel {
    BOOL _showGuide;
    NSString *_cancelBtnDesc;
    NSString *_openBioDesc;
    NSString *_guideDesc;
    NSString *_bioType;
    NSString *_successDesc;
    NSString *_showType;
    NSArray<CJPayBioPaymentSubGuideModel> *_subGuide;
}

@property (nonatomic) BOOL showGuide;
@property (copy, nonatomic) NSString *cancelBtnDesc;
@property (copy, nonatomic) NSString *openBioDesc;
@property (copy, nonatomic) NSString *guideDesc;
@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *successDesc;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSArray<CJPayBioPaymentSubGuideModel> *subGuide;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)showGuide;
- (void)setShowGuide:(BOOL)arg0;
- (id)guideDesc;
- (void)setGuideDesc:(id)arg0;
- (id)bioType;
- (id)cancelBtnDesc;
- (void)setCancelBtnDesc:(id)arg0;
- (void)setBioType:(id)arg0;
- (id)openBioDesc;
- (void)setOpenBioDesc:(id)arg0;
- (id)successDesc;
- (void)setSuccessDesc:(id)arg0;
- (id)subGuide;
- (void)setSubGuide:(id)arg0;
- (void).cxx_destruct;
- (id)showType;
- (void)setShowType:(id)arg0;

@end
