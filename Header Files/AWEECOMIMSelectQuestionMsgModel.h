//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEECOMIMQuestionItemCardModel;

@interface AWEECOMIMSelectQuestionMsgModel : AWEECOMIMBaseMsgModel {
    AWEECOMIMQuestionItemCardModel *_questionModel;
    double _questionTotalHeight;
    NSString *_questionTitle;
    NSArray *_questionList;
}

@property (copy, nonatomic) NSString *questionTitle;
@property (copy, nonatomic) NSArray *questionList;
@property (retain, nonatomic) AWEECOMIMQuestionItemCardModel *questionModel;
@property (nonatomic) double questionTotalHeight;

+ (Class)cellClass;

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
- (id)initWithMessage:(id)arg0;

@end
