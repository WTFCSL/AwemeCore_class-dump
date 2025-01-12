//
//     Generated by private class-dump
//

@class UIImage, AVPlayerItem, AVAssetExportSession, AWEVideoClipKeyManagedObject, ACCEditCompileSession, AWEAVMixedMutableCompositionBuilder, AWEVideoSegmentedClipAdapter, AWEStudioClipInputData, AWEStudioClipOutputData, NSObject;
@protocol AWEVideoClipFooterView, ACCEditVideoDataProtocol;

@interface AWEStudioClipModel : NSObject {
    BOOL _isSwitchClipMode;
    BOOL _sliderFixedLengthMode;
    BOOL _deletedSegment;
    BOOL _aiRangeChanged;
    BOOL _normalRangeChanged;
    AVPlayerItem *_normalPlayerItem;
    id<AWEVideoClipFooterView> _normalFooterView;
    AVAssetExportSession *_normalExportSession;
    AVPlayerItem *_aiPlayerItem;
    id<AWEVideoClipFooterView> _aiFooterView;
    AVAssetExportSession *_aiExportSession;
    UIImage *_coverImage;
    AWEStudioClipInputData *_inputData;
    AWEStudioClipOutputData *_outputData;
    AWEVideoSegmentedClipAdapter *_clipAdapter;
    double _initialContentOffset;
    AWEAVMixedMutableCompositionBuilder *_compositionBuilder;
    AWEAVMixedMutableCompositionBuilder *_selectedAssetCompositionBuilder;
    AWEVideoClipKeyManagedObject *_playerItemManagedObject;
    AWEVideoClipKeyManagedObject *_playerDataManagedObject;
    AWEVideoClipKeyManagedObject *_exportSessionManagedObject;
    AWEVideoClipKeyManagedObject *_exportVESessionManagedObject;
    AWEVideoClipKeyManagedObject *_footerViewManagedObject;
    AVPlayerItem *_selectedAssetPlayerItem;
    AVPlayerItem *_currentSelectedPlayerItem;
    NSObject<ACCEditVideoDataProtocol> *_selectedAssetPlayerData;
    NSObject<ACCEditVideoDataProtocol> *_currentSelectedPlayerData;
    NSObject<ACCEditVideoDataProtocol> *_aiPlayerData;
    struct CGSize { double width; double height; } _croppingSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _preciseSeekTime;
}

@property (readonly, nonatomic) BOOL isStoryMode;
@property (readonly, nonatomic) BOOL allowAIMode;
@property (nonatomic) BOOL isSwitchClipMode;
@property (nonatomic) BOOL sliderFixedLengthMode;
@property (nonatomic) BOOL deletedSegment;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } preciseSeekTime;
@property (nonatomic) BOOL aiRangeChanged;
@property (nonatomic) BOOL normalRangeChanged;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) AWEStudioClipInputData *inputData;
@property (retain, nonatomic) AWEStudioClipOutputData *outputData;
@property (retain, nonatomic) AWEVideoSegmentedClipAdapter *clipAdapter;
@property (nonatomic) double initialContentOffset;
@property (nonatomic) struct CGSize { double width; double height; } croppingSize;
@property (retain, nonatomic) AWEAVMixedMutableCompositionBuilder *compositionBuilder;
@property (retain, nonatomic) AWEAVMixedMutableCompositionBuilder *selectedAssetCompositionBuilder;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *playerItemManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *playerDataManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *exportSessionManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *exportVESessionManagedObject;
@property (retain, nonatomic) AWEVideoClipKeyManagedObject *footerViewManagedObject;
@property (retain, nonatomic) AVPlayerItem *selectedAssetPlayerItem;
@property (retain, nonatomic) AVPlayerItem *currentSelectedPlayerItem;
@property (readonly, nonatomic) AVPlayerItem *currentPlayerItem;
@property (retain, nonatomic) AVPlayerItem *normalPlayerItem;
@property (retain, nonatomic) AVPlayerItem *aiPlayerItem;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *selectedAssetPlayerData;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *currentSelectedPlayerData;
@property (readonly, nonatomic) NSObject<ACCEditVideoDataProtocol> *currentPlayerData;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *normalPlayerData;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *aiPlayerData;
@property (readonly, nonatomic) id<AWEVideoClipFooterView> currentFooterView;
@property (retain, nonatomic) id<AWEVideoClipFooterView> normalFooterView;
@property (retain, nonatomic) id<AWEVideoClipFooterView> aiFooterView;
@property (retain, nonatomic) AVAssetExportSession *normalExportSession;
@property (retain, nonatomic) AVAssetExportSession *aiExportSession;
@property (retain, nonatomic) ACCEditCompileSession *normalExportVESession;
@property (retain, nonatomic) ACCEditCompileSession *aiExportVESession;

- (void)setCoverImage:(id)arg0;
- (BOOL)isStoryMode;
- (void)setCroppingSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })croppingSize;
- (id)clipAdapter;
- (void)setClipAdapter:(id)arg0;
- (id)footerViewManagedObject;
- (void)setAiRangeChanged:(BOOL)arg0;
- (id)playerItemManagedObject;
- (id)playerDataManagedObject;
- (id)aiFooterView;
- (id)currentFooterView;
- (BOOL)aiRangeChanged;
- (BOOL)normalRangeChanged;
- (id)compositionBuilder;
- (void)setCompositionBuilder:(id)arg0;
- (BOOL)allowAIMode;
- (void)setNormalExportVESession:(id)arg0;
- (id)normalExportVESession;
- (id)aiPlayerData;
- (void)setAiExportVESession:(id)arg0;
- (id)aiExportVESession;
- (id)aiPlayerItem;
- (void)setAiExportSession:(id)arg0;
- (id)aiExportSession;
- (id)normalPlayerItem;
- (void)setNormalExportSession:(id)arg0;
- (id)normalExportSession;
- (BOOL)sliderFixedLengthMode;
- (id)exportSessionManagedObject;
- (id)normalFooterView;
- (void)setNormalRangeChanged:(BOOL)arg0;
- (id)selectedAssetCompositionBuilder;
- (BOOL)deletedSegment;
- (void)setDeletedSegment:(BOOL)arg0;
- (void)setPreciseSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (BOOL)isSwitchClipMode;
- (id)currentPlayerData;
- (id)exportVESessionManagedObject;
- (void)setNormalPlayerItem:(id)arg0;
- (void)setNormalPlayerData:(id)arg0;
- (void)setAiPlayerItem:(id)arg0;
- (void)setNormalFooterView:(id)arg0;
- (void)setAiFooterView:(id)arg0;
- (id)normalPlayerData;
- (void)setIsSwitchClipMode:(BOOL)arg0;
- (void)setSliderFixedLengthMode:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preciseSeekTime;
- (void)setSelectedAssetCompositionBuilder:(id)arg0;
- (void)setPlayerItemManagedObject:(id)arg0;
- (void)setPlayerDataManagedObject:(id)arg0;
- (void)setExportSessionManagedObject:(id)arg0;
- (void)setExportVESessionManagedObject:(id)arg0;
- (void)setFooterViewManagedObject:(id)arg0;
- (id)selectedAssetPlayerItem;
- (void)setSelectedAssetPlayerItem:(id)arg0;
- (id)currentSelectedPlayerItem;
- (void)setCurrentSelectedPlayerItem:(id)arg0;
- (id)selectedAssetPlayerData;
- (void)setSelectedAssetPlayerData:(id)arg0;
- (id)currentSelectedPlayerData;
- (void)setCurrentSelectedPlayerData:(id)arg0;
- (void)setAiPlayerData:(id)arg0;
- (void).cxx_destruct;
- (id)outputData;
- (void)dealloc;
- (double)initialContentOffset;
- (void)setInitialContentOffset:(double)arg0;
- (id)inputData;
- (id)coverImage;
- (void)setInputData:(id)arg0;
- (void)setOutputData:(id)arg0;
- (id)currentPlayerItem;

@end
