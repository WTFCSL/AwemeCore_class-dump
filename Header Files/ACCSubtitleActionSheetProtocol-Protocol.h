//
//     Generated by private class-dump
//

@protocol ACCSubtitleActionSheetDelegate;

@protocol ACCSubtitleActionSheetProtocol <NSObject>

@property (nonatomic) BOOL hasTitle;
@property (weak, nonatomic) id<ACCSubtitleActionSheetDelegate> delegate;

- (BOOL)hasTitle;
- (void)show;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setHasTitle:(BOOL)arg0;

@end