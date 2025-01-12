//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEMVChannelPlayerCardVideoControllerProtocol;

@interface AWEMVChannelPlayerCardBaseElement : AWEBaseElement <AWEMVChannelPlayerCardDispatchProtocol> {
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, weak, nonatomic) UIViewController<AWEMVChannelPlayerCardVideoControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)updateState:(long long)arg0;
- (id)container;
- (void)setModel:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (id)model;
- (void)setData:(id)arg0;
- (id)context;

@end
