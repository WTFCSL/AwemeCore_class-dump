//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, UIView;

@interface BDPVConsoleWebView : BDPBridgeWebView <BDPWebViewImplInterface, BDPBusinessEnginePublishProtocol, UIGestureRecognizerDelegate> {
    BOOL _isShowed;
    BOOL _isInteractGame;
    BDPUniqueID *_uniqueID;
    UIView *_view;
}

@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL isInteractGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDestFrame:(BOOL)arg0;
+ (struct CGSize { double x0; double x1; })getCorrectScreenSize;

- (void)setIsShowed:(BOOL)arg0;
- (BOOL)isShowed;
- (void)instance:(id)arg0 publish:(id)arg1 dest:(unsigned long long)arg2 param:(id)arg3;
- (void)webView:(id)arg0 publish:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeHandler:(id)arg0 data:(id)arg1;
- (void)dismissAnimated;
- (void)showAnimatedInView:(id)arg0;
- (void)setupServicePublish;
- (void)setupVConsoleContent;
- (void)showAnimated;
- (BOOL)isInteractGame;
- (void)setIsInteractGame:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getGameDestFrame:(BOOL)arg0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setView:(id)arg0;
- (id)view;
- (id)initWithUniqueID:(id)arg0;

@end
