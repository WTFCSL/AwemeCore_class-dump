//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEFeedHotSpotPanelProtocol;

@interface AWESpecialCardLynxPreCreateModel : NSObject <AWESpecialCardCacheModelProtocol> {
    long long _status;
    AWEAwemeModel *_model;
    UIViewController<AWEFeedHotSpotPanelProtocol> *_panelVC;
    id /* block */ _completion;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController<AWEFeedHotSpotPanelProtocol> *panelVC;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelVC;
- (void)setPanelVC:(id)arg0;
- (void)setModel:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (long long)status;
- (id)model;
- (void)setStatus:(long long)arg0;
- (void)dealloc;

@end