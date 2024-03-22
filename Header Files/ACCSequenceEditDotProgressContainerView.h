//
//     Generated by private class-dump
//

@class NSString, ACCSequenceEditDotProgressView;
@protocol ACCSequenceEditIndicatorViewDataSource, ACCSequenceEditIndicatorViewDelegate;

@interface ACCSequenceEditDotProgressContainerView : UIView <ACCSequenceEditIndicatorViewProtocol> {
    id<ACCSequenceEditIndicatorViewDelegate> delegate;
    id<ACCSequenceEditIndicatorViewDataSource> dataSource;
    long long progressBarStyle;
    long long _pageIndex;
    long long _numberOfPages;
    ACCSequenceEditDotProgressView *_progressView;
}

@property (retain, nonatomic) ACCSequenceEditDotProgressView *progressView;
@property (nonatomic) long long pageIndex;
@property (readonly, nonatomic) long long numberOfPages;
@property (weak, nonatomic) id<ACCSequenceEditIndicatorViewDataSource> dataSource;
@property (weak, nonatomic) id<ACCSequenceEditIndicatorViewDelegate> delegate;
@property (nonatomic) long long progressBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (void)updateViewWidth:(double)arg0;
- (void)updateProgressParagraphShapeLayer;
- (void)updateNumberOfPages:(long long)arg0;
- (id)initWithViewWidth:(double)arg0;
- (void)reloadDataAtIndex:(long long)arg0;
- (void)reloadPageStyle;
- (void)reloadPageStyleForIndex:(long long)arg0;
- (void)reloadProgressBarStyle;
- (long long)progressBarStyle;
- (void)setProgressBarStyle:(long long)arg0;
- (long long)pageIndex;
- (void)setPageIndex:(long long)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)reloadData;
- (id)delegate;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (long long)numberOfPages;
- (void)setDelegate:(id)arg0;

@end
