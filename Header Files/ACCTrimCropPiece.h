//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCEditCropProtocol, ACCEditTrimProtocol;

@interface ACCTrimCropPiece : NSObject <ACCTrimCropPieceProtocol> {
    BOOL _isTimeLabelShown;
    BOOL _isAllowTrim;
    BOOL _isReplicaMode;
    BOOL _copyDone;
    id<ACCEditCropProtocol> _cropEditor;
    NSString *_uuid;
    id<ACCEditTrimProtocol> _trimEditor;
    id /* block */ _imageHandler;
}

@property (nonatomic) BOOL isReplicaMode;
@property (nonatomic) BOOL copyDone;
@property (copy, nonatomic) id /* block */ imageHandler;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long resourceType;
@property (readonly, nonatomic) id<ACCEditTrimProtocol> trimEditor;
@property (readonly, nonatomic) id<ACCEditCropProtocol> cropEditor;
@property (nonatomic) BOOL isTimeLabelShown;
@property (nonatomic) BOOL isAllowTrim;
@property (readonly, nonatomic) BOOL isAdjustEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTimeLabelShown;
- (id)trimEditor;
- (BOOL)isAllowTrim;
- (void)imageWithHighPriority:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)cropEditor;
- (void)setIsTimeLabelShown:(BOOL)arg0;
- (void)setIsAllowTrim:(BOOL)arg0;
- (BOOL)isAdjustEnabled;
- (void)setIsReplicaMode:(BOOL)arg0;
- (BOOL)copyDone;
- (void)setCopyDone:(BOOL)arg0;
- (BOOL)isReplicaMode;
- (id)initWithUUID:(id)arg0 trimEditor:(id)arg1 cropEditor:(id)arg2;
- (unsigned long long)resourceType;
- (void).cxx_destruct;
- (id)description;
- (id)uuid;
- (id /* block */)imageHandler;
- (void)setImageHandler:(id /* block */)arg0;

@end
