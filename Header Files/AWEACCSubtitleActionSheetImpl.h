//
//     Generated by private class-dump
//

@class AWESubtitleActionSheet, NSString;
@protocol ACCSubtitleActionSheetDelegate;

@interface AWEACCSubtitleActionSheetImpl : NSObject <AWESubtitleActionSheetDelegate, ACCSubtitleActionSheetProtocol> {
    BOOL _hasTitle;
    id<ACCSubtitleActionSheetDelegate> delegate;
    AWESubtitleActionSheet *_sheet;
}

@property (retain, nonatomic) AWESubtitleActionSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasTitle;
@property (weak, nonatomic) id<ACCSubtitleActionSheetDelegate> delegate;

- (id)titleForSubtitleActionSheet;
- (id)buttonTextsForSubtitleActionSheet;
- (id)buttonTypesForSubtitleActionSheet;
- (void)didClickedSubtitleActionSheetButtonAtIndex:(long long)arg0;
- (BOOL)hasTitle;
- (void).cxx_destruct;
- (void)show;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setHasTitle:(BOOL)arg0;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end