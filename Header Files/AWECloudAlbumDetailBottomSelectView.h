//
//     Generated by private class-dump
//

@class ACCButton;
@protocol AWECloudAlbumDetailBottomSelectViewDelegate;

@interface AWECloudAlbumDetailBottomSelectView : UIView {
    id<AWECloudAlbumDetailBottomSelectViewDelegate> _delegate;
    ACCButton *_publishButton;
    ACCButton *_localSaveButton;
    ACCButton *_deleteButton;
}

@property (retain, nonatomic) ACCButton *publishButton;
@property (retain, nonatomic) ACCButton *localSaveButton;
@property (retain, nonatomic) ACCButton *deleteButton;
@property (weak, nonatomic) id<AWECloudAlbumDetailBottomSelectViewDelegate> delegate;

- (id)publishButton;
- (void)setPublishButton:(id)arg0;
- (void)updateWithSelectedCount:(long long)arg0 saveEnable:(BOOL)arg1;
- (void)onPublishButtonAction:(id)arg0;
- (void)onLocalSaveButtonAction:(id)arg0;
- (void)setLocalSaveButton:(id)arg0;
- (void)onDeleteButtonAction:(id)arg0;
- (id)localSaveButton;
- (void)setDeleteButton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)deleteButton;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
