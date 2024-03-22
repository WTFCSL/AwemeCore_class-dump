//
//     Generated by private class-dump
//

@class ACCTrimCropBarItem, NSArray, ACCTrimEditorViewController, NSString;
@protocol ACCTrimCropEditorConfigProtocol, IESServiceProvider;

@interface ACCTCETrimEditorBar : NSObject <ACCTrimCropBarProtocol> {
    id<IESServiceProvider> _serviceProvider;
    id<ACCTrimCropEditorConfigProtocol> _editorConfig;
    NSArray *_toolBarList;
    ACCTrimCropBarItem *_barItem;
    ACCTrimEditorViewController *_subViewController;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCTrimCropEditorConfigProtocol> editorConfig;
@property (retain, nonatomic) NSArray *toolBarList;
@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (retain, nonatomic) ACCTrimEditorViewController *subViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEditorConfig:(id)arg0;
- (id)editorConfig;
- (id)barItem;
- (id)subViewController;
- (void)setBarItem:(id)arg0;
- (id)toolBarList;
- (void)setToolBarList:(id)arg0;
- (void)setSubViewController:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (void)dealloc;

@end
