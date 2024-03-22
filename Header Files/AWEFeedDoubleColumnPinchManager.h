//
//     Generated by private class-dump
//

@class UIViewController, NSString, NSMutableSet, UIView, AWEFeedDoubleColumnViewController;
@protocol AWEFeedTableViewControllerProtocol;

@interface AWEFeedDoubleColumnPinchManager : NSObject {
    BOOL _isPinching;
    BOOL _nextEnterUseAnimation;
    BOOL _enterAnimationAlreadyPrepared;
    BOOL _nextExitUseAnimation;
    BOOL _exitAnimationAlreadyPrepared;
    NSString *_currentEnterMethod;
    AWEFeedDoubleColumnViewController *_doubleColumnVC;
    NSMutableSet *_dislikeSet;
    NSMutableSet *_skipSet;
    UIView *_enterTargetView;
    UIViewController<AWEFeedTableViewControllerProtocol> *_recommendFeedVC;
    UIView *_exitTargetView;
}

@property (weak, nonatomic) AWEFeedDoubleColumnViewController *doubleColumnVC;
@property (retain, nonatomic) NSMutableSet *dislikeSet;
@property (retain, nonatomic) NSMutableSet *skipSet;
@property (nonatomic) BOOL nextEnterUseAnimation;
@property (nonatomic) BOOL enterAnimationAlreadyPrepared;
@property (weak, nonatomic) UIView *enterTargetView;
@property (weak, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> *recommendFeedVC;
@property (nonatomic) BOOL nextExitUseAnimation;
@property (nonatomic) BOOL exitAnimationAlreadyPrepared;
@property (weak, nonatomic) UIView *exitTargetView;
@property (nonatomic) BOOL isPinching;
@property (retain, nonatomic) NSString *currentEnterMethod;

+ (BOOL)isHitPinchToDoubleColumnTest;
+ (void)recordEnterGuideShowOrBlock;
+ (BOOL)needExitGuide;
+ (BOOL)isDoubleColumnVCAtTop;
+ (id)pinchToDoubleColumnDict;
+ (BOOL)needEnterGuide;
+ (BOOL)needEnterGuideWithAweme:(id)arg0;
+ (long long)exitGuideDelayDuration;
+ (void)recordExitGuideShowOrBlock;
+ (BOOL)disableAnimationAbility;
+ (BOOL)enableFixPinchToC2;
+ (id)experimentID;
+ (id)sharedInstance;

- (void)useEnterAnimationIfAvailable;
- (void)cancelEnterAnimationIfAvailable;
- (void)trigerEnterGuideIfNeededWithAweme:(id)arg0;
- (id)currentEnterMethod;
- (void)setCurrentEnterMethod:(id)arg0;
- (void)recordDislikeWithItemID:(id)arg0 referString:(id)arg1;
- (id)doubleColumnVC;
- (void)setDoubleColumnVC:(id)arg0;
- (void)setNextEnterUseAnimation:(BOOL)arg0;
- (void)setEnterAnimationAlreadyPrepared:(BOOL)arg0;
- (id)currentTopVC;
- (id)dislikeSet;
- (void)trigerExitGuideIfNeeded;
- (void)setRecommendFeedVC:(id)arg0;
- (id)enterTargetView;
- (BOOL)enterAnimationAlreadyPrepared;
- (void)setEnterTargetView:(id)arg0;
- (BOOL)nextEnterUseAnimation;
- (id)recommendFeedVC;
- (void)setNextExitUseAnimation:(BOOL)arg0;
- (id)exitTargetView;
- (BOOL)exitAnimationAlreadyPrepared;
- (void)setExitTargetView:(id)arg0;
- (void)setExitAnimationAlreadyPrepared:(BOOL)arg0;
- (BOOL)nextExitUseAnimation;
- (void)recordSkipCellIfNeed:(id)arg0 appearTime:(double)arg1;
- (void)prepareForExitGuideIfNeeded:(id)arg0;
- (void)cancelExitGuideIfNeeded;
- (void)recordRecommendFeedVC:(id)arg0;
- (void)prepareForEnterAnimationIfNeeded:(id)arg0;
- (void)trigerEnterAnimationIfNeeded:(id)arg0;
- (void)useExitAnimationIfAvailable;
- (void)cancelExitAnimationIfAvailable;
- (void)prepareForExitAnimationIfNeeded;
- (void)trigerExitAnimationIfNeeded:(id)arg0;
- (void)setDislikeSet:(id)arg0;
- (void)setSkipSet:(id)arg0;
- (void)setIsPinching:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isPinching;
- (id)skipSet;

@end
