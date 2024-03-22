//
//     Generated by private class-dump
//

@class NSString, IESGCPEvaluationGradeInfoModel;

@interface IESGCPShowEvaluationSectionModel : NSObject <IESGCPEvaluationSectionModelProtocol> {
    NSString *_sectionTitle;
    unsigned long long _headerType;
    IESGCPEvaluationGradeInfoModel *_gradeInfoModel;
}

@property (retain, nonatomic) IESGCPEvaluationGradeInfoModel *gradeInfoModel;
@property (nonatomic) unsigned long long headerType;
@property (copy, nonatomic) NSString *sectionTitle;
@property (readonly, copy, nonatomic) NSString *reuseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gradeInfoModel;
- (void)setGradeInfoModel:(id)arg0;
- (void)setHeaderType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)headerType;
- (id)reuseIdentifier;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg0;

@end