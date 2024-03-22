//
//     Generated by private class-dump
//

@class NSString, AWEFormatAnchorControlAPI;

@interface IESFormatAnchorControlFragment : IESFormatComponentBase <AWEFormatAnchorControlService> {
    BOOL isFormatOpen;
    AWEFormatAnchorControlAPI *_api;
}

@property (retain, nonatomic) AWEFormatAnchorControlAPI *api;
@property (nonatomic) BOOL isFormatOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showAnchorControlView;
- (void)updateFormatOpenStatus:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)isFormatOpen;
- (void)setIsFormatOpen:(BOOL)arg0;
- (void)didUpdateFormatRoom:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:(id)arg0;

@end