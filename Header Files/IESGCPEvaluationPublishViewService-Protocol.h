//
//     Generated by private class-dump
//

@protocol IESGCPEvaluationPublishViewService <NSObject>

@property (copy, nonatomic) id /* block */ onTapProtocolButton;
@property (copy, nonatomic) id /* block */ onTapPublishButton;
@property (copy, nonatomic) id /* block */ updatePublishButtonStatus;
@property (copy, nonatomic) id /* block */ onTapContainerBackground;
@property (readonly, nonatomic) long long tagSelectedCount;
@property (readonly, nonatomic) double currenRating;

- (id /* block */)onTapProtocolButton;
- (void)setOnTapProtocolButton:(id /* block */)arg0;

@optional

- (long long)calculateTextCount;
- (id /* block */)updatePublishButtonStatus;
- (void)deactivateTextView;
- (id)getPublicEvaluationContentDic;
- (long long)getSelectedImagesCount;
- (id)getImagesUploadGroup;
- (id /* block */)onTapPublishButton;
- (void)setOnTapPublishButton:(id /* block */)arg0;
- (void)setUpdatePublishButtonStatus:(id /* block */)arg0;
- (id /* block */)onTapContainerBackground;
- (void)setOnTapContainerBackground:(id /* block */)arg0;
- (long long)tagSelectedCount;
- (double)currenRating;

@end
