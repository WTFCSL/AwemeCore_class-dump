//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UIView;
@protocol CSJAd;

@interface CSJViewTracker : NSObject <CSJViewTracker> {
    BOOL _isWitness;
    UIView *_view;
    id<CSJAd> _admodel;
    NSDictionary *_extra;
    long long _repeatType;
    long long _lastPresentation;
    id /* block */ _showEvent;
    id /* block */ _dismissEvent;
    double _showTimestamp;
    NSString *_source;
    NSString *_tag;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) id<CSJAd> admodel;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isWitness;
@property (nonatomic) long long repeatType;
@property (nonatomic) long long lastPresentation;
@property (copy) id /* block */ showEvent;
@property (copy) id /* block */ dismissEvent;
@property (nonatomic) double showTimestamp;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)arg0;
- (BOOL)checkIfViewInScreen;
- (void)setAdmodel:(id)arg0;
- (void)setShowEvent:(id /* block */)arg0;
- (void)setDismissEvent:(id /* block */)arg0;
- (BOOL)isWitness;
- (void)setIsWitness:(BOOL)arg0;
- (long long)lastPresentation;
- (void)setLastPresentation:(long long)arg0;
- (id /* block */)showEvent;
- (id /* block */)dismissEvent;
- (id)admodel;
- (long long)repeatType;
- (id)source;
- (void).cxx_destruct;
- (id)extra;
- (void)setView:(id)arg0;
- (void)setTag:(id)arg0;
- (id)tag;
- (void)setSource:(id)arg0;
- (id)view;
- (BOOL)invalid;
- (void)setRepeatType:(long long)arg0;
- (double)showTimestamp;
- (void)setShowTimestamp:(double)arg0;

@end
