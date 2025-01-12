//
//     Generated by private class-dump
//

@class IESECCommentSurveyPostModel, NSString, NSDictionary, BDXBridgeEventSubscriber, NSData, UIView;
@protocol IESHYContainerProtocol, IESECCommentSurveyManagerDelegate;

@interface IESECCommentSurveyManager : NSObject <IESHYHybridViewLifecycleProtocol> {
    BOOL _shouldShow;
    BOOL _showSubOptions;
    BOOL _editingContent;
    BOOL _hasContent;
    UIView<IESHYContainerProtocol> *_hybridContainer;
    id<IESECCommentSurveyManagerDelegate> _delegate;
    long long _insertIndex;
    NSDictionary *_surveyStatistics;
    BDXBridgeEventSubscriber *_subscriber;
    NSString *_currentLynxUrl;
    NSData *_lynxTemplate;
    NSString *_surveyLynxUrl;
    NSString *_surveyJsonStr;
    unsigned long long _scene;
    long long _surveyId;
    NSString *_productId;
    IESECCommentSurveyPostModel *_postModel;
    NSDictionary *_frequencyData;
    struct CGSize { double width; double height; } _updatedSize;
}

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) NSString *currentLynxUrl;
@property (retain, nonatomic) NSData *lynxTemplate;
@property (copy, nonatomic) NSString *surveyLynxUrl;
@property (copy, nonatomic) NSString *surveyJsonStr;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long surveyId;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) IESECCommentSurveyPostModel *postModel;
@property (nonatomic) BOOL showSubOptions;
@property (nonatomic) BOOL editingContent;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) struct CGSize { double width; double height; } updatedSize;
@property (copy, nonatomic) NSDictionary *frequencyData;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (weak, nonatomic) id<IESECCommentSurveyManagerDelegate> delegate;
@property (nonatomic) long long insertIndex;
@property (copy, nonatomic) NSDictionary *surveyStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInsertIndex:(long long)arg0;
- (long long)insertIndex;
- (id)hybridContainer;
- (void)setHybridContainer:(id)arg0;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg0;
- (long long)surveyId;
- (void)setSurveyId:(long long)arg0;
- (void)registerEvent;
- (void)setUpdatedSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })updatedSize;
- (void)setPostModel:(id)arg0;
- (id)postModel;
- (void)removeEvent;
- (void)initServiceWithModel:(id)arg0 scene:(unsigned long long)arg1 productId:(id)arg2;
- (void)setSurveyStatistics:(id)arg0;
- (void)forceSubmitSurvey;
- (id)loadSurveyView;
- (void)setSurveyJsonStr:(id)arg0;
- (void)setSurveyLynxUrl:(id)arg0;
- (BOOL)surveyShouldShowWithScene:(unsigned long long)arg0;
- (id)surveyStatistics;
- (id)toStringWithScene:(unsigned long long)arg0;
- (id)surveyLynxUrl;
- (id)surveyJsonStr;
- (id)lynxTemplate;
- (id)currentLynxUrl;
- (void)setCurrentLynxUrl:(id)arg0;
- (void)updateSurveyFrequency:(unsigned long long)arg0 scene:(unsigned long long)arg1;
- (void)updatePostModelWithParams:(id)arg0;
- (void)submitSurvey;
- (void)cleanPostModel;
- (void)closeSurvey;
- (BOOL)editingContent;
- (void)forceFocusIfNeeded;
- (void)setEditingContent:(BOOL)arg0;
- (void)submitSurveyResultWithModel:(id)arg0;
- (void)storeFrequencyData;
- (id)surveyFrequencyKeyWithScene:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })getDefaultSizeWithScene:(unsigned long long)arg0;
- (void)updateStatusWithParams:(id)arg0;
- (void)setLynxTemplate:(id)arg0;
- (BOOL)showSubOptions;
- (void)setShowSubOptions:(BOOL)arg0;
- (id)init;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)subscriber;
- (void)updateData:(id)arg0;
- (id)productId;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)hasContent;
- (unsigned long long)scene;
- (BOOL)shouldShow;
- (void)setProductId:(id)arg0;
- (void)setHasContent:(BOOL)arg0;
- (void)setSubscriber:(id)arg0;
- (long long)daysBetweenDate:(id)arg0 andDate:(id)arg1;
- (void)setShouldShow:(BOOL)arg0;
- (id)frequencyData;
- (void)setFrequencyData:(id)arg0;

@end
