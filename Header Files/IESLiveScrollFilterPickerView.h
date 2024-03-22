//
//     Generated by private class-dump
//

@class UIView, IESLiveRoomFilter, HTSLiveChangeFilterAlertView, NSArray, NSString, IESLiveBeautyEffectConfig, IESLiveSlideLabelAnimator, IESLivePagingView;
@protocol IESLiveScrollFilterPickerViewDelegate, IESLiveLanguageService;

@interface IESLiveScrollFilterPickerView : UIView <IESLivePageingViewDelegate, IESLivePageingViewDataSource, IESLiveScrollFilterPickerViewProtocol> {
    BOOL _useNewOpenLive;
    BOOL _enableFilterName;
    NSArray *_filters;
    IESLiveRoomFilter *_currentFilter;
    long long _sliderValue;
    id<IESLiveScrollFilterPickerViewDelegate> _delegate;
    IESLivePagingView *_pagingView;
    IESLiveSlideLabelAnimator *_animator;
    UIView *_emptyView;
    long long _currentIndex;
    id<IESLiveLanguageService> _languageService;
    IESLiveBeautyEffectConfig *_beautyConfig;
    HTSLiveChangeFilterAlertView *_alertView;
}

@property (retain, nonatomic) IESLivePagingView *pagingView;
@property (retain, nonatomic) IESLiveSlideLabelAnimator *animator;
@property (retain, nonatomic) UIView *emptyView;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL enableFilterName;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) IESLiveBeautyEffectConfig *beautyConfig;
@property (retain, nonatomic) HTSLiveChangeFilterAlertView *alertView;
@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) IESLiveRoomFilter *currentFilter;
@property (nonatomic) long long sliderValue;
@property (weak, nonatomic) id<IESLiveScrollFilterPickerViewDelegate> delegate;
@property (nonatomic) BOOL useNewOpenLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (id)beautyConfig;
- (void)setBeautyConfig:(id)arg0;
- (void)enableFilterName:(BOOL)arg0;
- (void)setInitialFilterIndex:(long long)arg0;
- (void)reloadPages;
- (void)setCurrentFilter:(id)arg0 isSwiping:(BOOL)arg1;
- (BOOL)useNewOpenLive;
- (void)setUseNewOpenLive:(BOOL)arg0;
- (unsigned long long)numberOfPageInPagingView:(id)arg0;
- (long long)pagingView:(id)arg0 initedIndexWithIndex:(long long)arg1;
- (id)pagingView:(id)arg0 viewAtIndex:(long long)arg1 identifier:(id *)arg2;
- (void)pagingView:(id)arg0 didPageToIndex:(long long)arg1 isScrolled:(BOOL)arg2;
- (void)pagingView:(id)arg0 visiblePage:(id)arg1 index:(unsigned long long)arg2 offsetDidChange:(double)arg3;
- (void)pagingViewDidEndScroll:(id)arg0;
- (void)loadFilters;
- (void)setEnableFilterName:(BOOL)arg0;
- (void)setInitialFilter:(id)arg0;
- (BOOL)enableFilterName;
- (void)showFilterName:(id)arg0 slidePosition:(BOOL)arg1 force:(BOOL)arg2;
- (void)setCurrentIndex:(long long)arg0 isSwiping:(BOOL)arg1;
- (void)showChangeFilterAlertWithIndex:(unsigned long long)arg0 isSwiping:(BOOL)arg1;
- (void)changeFilterToIndex:(long long)arg0 isSwiping:(BOOL)arg1;
- (void)pr_didScrollFrom:(id)arg0 To:(id)arg1 dirction:(long long)arg2 progress:(double)arg3;
- (void)pagingViewDidEndDecelerating:(id)arg0 dragEndPosition:(struct CGPoint { double x0; double x1; })arg1;
- (void)scrollToPreviousPage;
- (id)animator;
- (void)setFilters:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)filters;
- (void)setAlertView:(id)arg0;
- (void)setCurrentFilter:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentIndex:(long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setAnimator:(id)arg0;
- (id)alertView;
- (id)currentFilter;
- (void)scrollToNextPage;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (void)setSliderValue:(long long)arg0;
- (long long)sliderValue;
- (id)pagingView;
- (void)setPagingView:(id)arg0;

@end