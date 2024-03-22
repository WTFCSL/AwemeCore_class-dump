//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol;

@interface AWEPublishPhotoPrepareStage : AWEPublishBaseStage {
    id<ACCEditServiceProtocol> _editService;
    AWEVideoPublishViewModel *_publishViewModel;
}

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;

- (id)publishViewModel;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (id)initWithModel:(id)arg0 editService:(id)arg1;
- (void)p_run;
- (void)saveStoryToAlbum:(id)arg0;
- (void)run;
- (void).cxx_destruct;

@end
