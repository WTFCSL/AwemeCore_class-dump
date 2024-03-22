//
//     Generated by private class-dump
//

@class NSString, CAKAlbumListCustomCellConfig;

@interface ACCNativeAlbumInputConfigHelper : NSObject {
    BOOL _scrollToBottom;
    BOOL _isPrepareOpenCamera;
    long long _columnNumber;
    CAKAlbumListCustomCellConfig *_cellConfig;
    NSString *_picTemplateId;
    NSString *_shootWay;
    NSString *_shootEnterFrom;
}

@property (nonatomic) BOOL scrollToBottom;
@property (nonatomic) long long columnNumber;
@property (retain, nonatomic) CAKAlbumListCustomCellConfig *cellConfig;
@property (retain, nonatomic) NSString *picTemplateId;
@property (nonatomic) BOOL isPrepareOpenCamera;
@property (retain, nonatomic) NSString *shootWay;
@property (retain, nonatomic) NSString *shootEnterFrom;

- (void)setShootWay:(id)arg0;
- (void)setShootEnterFrom:(id)arg0;
- (void)setScrollToBottom:(BOOL)arg0;
- (id)cellConfig;
- (id)shootWay;
- (id)shootEnterFrom;
- (void)setCellConfig:(id)arg0;
- (void)setPicTemplateId:(id)arg0;
- (id)initAndPrepare;
- (id)picTemplateId;
- (id)cameraCustomCellConfig;
- (void)setIsPrepareOpenCamera:(BOOL)arg0;
- (void)openCameraCreation;
- (void)handleResultWithContext:(id)arg0 creationData:(id)arg1 uiControlHandler:(id)arg2;
- (void)enterEditorPagefilePath:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isPrepareOpenCamera;
- (void).cxx_destruct;
- (long long)columnNumber;
- (BOOL)scrollToBottom;
- (void)setColumnNumber:(long long)arg0;

@end
