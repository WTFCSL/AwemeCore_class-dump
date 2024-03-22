//
//     Generated by private class-dump
//

@class NSString, NSAttributedString, AWEConcernFansLabelModel;

@interface AWERelationListNameLabelModel : NSObject {
    BOOL _isEditable;
    BOOL _isInDeactivateBufferPeriod;
    NSString *_name;
    NSAttributedString *_attributedName;
    NSString *_verifiedIconName;
    NSString *_relationTag;
    AWEConcernFansLabelModel *_fansLabelModel;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (copy, nonatomic) NSString *verifiedIconName;
@property (copy, nonatomic) NSString *relationTag;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isInDeactivateBufferPeriod;
@property (retain, nonatomic) AWEConcernFansLabelModel *fansLabelModel;

- (void)setRelationTag:(id)arg0;
- (id)relationTag;
- (id)verifiedIconName;
- (BOOL)isInDeactivateBufferPeriod;
- (void)setFansLabelModel:(id)arg0;
- (id)fansLabelModel;
- (void)setVerifiedIconName:(id)arg0;
- (void)setIsInDeactivateBufferPeriod:(BOOL)arg0;
- (void)setIsEditable:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (BOOL)isEditable;
- (id)name;
- (void)setAttributedName:(id)arg0;
- (id)attributedName;

@end
