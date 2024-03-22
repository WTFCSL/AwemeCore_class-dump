//
//     Generated by private class-dump
//

@class NSString, IESMMCanvasSource, ACCRepositoryWorkspace;
@protocol ACCEditServiceProtocol;

@interface AWEPublishMergeImageOperation : NSObject {
    BOOL _executing;
    long long _retryCount;
    long long _imageIndex;
    id<ACCEditServiceProtocol> _editService;
    ACCRepositoryWorkspace *_workspace;
    id /* block */ _completion;
    IESMMCanvasSource *_originCanvasSource;
    struct CGSize { double width; double height; } _preferredSize;
    struct CGSize { double width; double height; } _externalCanvasSize;
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _newCanvasSize;
    struct CGSize { double width; double height; } _originCanvasSize;
    struct CGSize { double width; double height; } _exportSize;
}

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } newCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } originCanvasSize;
@property (nonatomic) struct CGSize { double width; double height; } exportSize;
@property (retain, nonatomic) IESMMCanvasSource *originCanvasSource;
@property (nonatomic) long long imageIndex;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) struct CGSize { double width; double height; } externalCanvasSize;
@property (nonatomic) long long retryCount;
@property (readonly, nonatomic) NSString *operationID;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (copy, nonatomic) id /* block */ completion;

- (id)editService;
- (void)setEditService:(id)arg0;
- (struct CGSize { double x0; double x1; })newCanvasSize;
- (struct CGSize { double x0; double x1; })originCanvasSize;
- (struct CGSize { double x0; double x1; })exportSize;
- (id)originCanvasSource;
- (struct CGSize { double x0; double x1; })externalCanvasSize;
- (void)setExternalCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setNewCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setOriginCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setExportSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setOriginCanvasSource:(id)arg0;
- (id)init;
- (id)workspace;
- (id)operationID;
- (struct CGSize { double x0; double x1; })imageSize;
- (id /* block */)completion;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (void)setRetryCount:(long long)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (long long)retryCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (void)setExecuting:(BOOL)arg0;
- (void)setWorkspace:(id)arg0;
- (struct CGSize { double x0; double x1; })preferredSize;
- (void)setPreferredSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setImageIndex:(long long)arg0;
- (long long)imageIndex;

@end
