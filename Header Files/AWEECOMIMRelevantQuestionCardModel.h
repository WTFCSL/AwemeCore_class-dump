//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEECOMIMQuestionItemCardModel;

@interface AWEECOMIMRelevantQuestionCardModel : AWEECOMIMBaseCardModel {
    AWEECOMIMQuestionItemCardModel *_questionModel;
    double _questionTotalHeight;
    NSString *_questionTitle;
    NSArray *_questionList;
}

@property (copy, nonatomic) NSString *questionTitle;
@property (copy, nonatomic) NSArray *questionList;
@property (retain, nonatomic) AWEECOMIMQuestionItemCardModel *questionModel;
@property (nonatomic) double questionTotalHeight;

+ (Class)cardViewClass;

- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)reBulildCellFullContentHeight;
- (void)setQuestionList:(id)arg0;
- (void)setQuestionTitle:(id)arg0;
- (id)questionList;
- (id)questionTitle;
- (void)setQuestionModel:(id)arg0;
- (id)questionModel;
- (void)setQuestionTotalHeight:(double)arg0;
- (double)questionTotalHeight;
- (void).cxx_destruct;

@end
