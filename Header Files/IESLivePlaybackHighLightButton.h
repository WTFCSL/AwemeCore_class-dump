//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface IESLivePlaybackHighLightButton : UIView <IESLivePluginLayoutViewAdapter> {
    UILabel *_tipDetailButton;
}

@property (retain, nonatomic) UILabel *tipDetailButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (id)tipDetailButton;
- (void)setTipDetailButton:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (id)viewType;

@end
