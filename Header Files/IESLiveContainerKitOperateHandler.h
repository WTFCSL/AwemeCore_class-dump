//
//     Generated by private class-dump
//

@class IESLiveRightTopMutuallyExclusiveItem, UIView;
@protocol HTSLivePluginLayoutView;

@interface IESLiveContainerKitOperateHandler : NSObject {
    unsigned long long _state;
    id /* block */ _onStateChange;
    UIView<HTSLivePluginLayoutView> *_pluginView;
    IESLiveRightTopMutuallyExclusiveItem *_currentItem;
}

@property (weak, nonatomic) UIView<HTSLivePluginLayoutView> *pluginView;
@property (retain, nonatomic) IESLiveRightTopMutuallyExclusiveItem *currentItem;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ onStateChange;

- (id /* block */)onStateChange;
- (void)setOnStateChange:(id /* block */)arg0;
- (void)setCurrentItem:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (id)currentItem;
- (id)pluginView;
- (void)setPluginView:(id)arg0;

@end