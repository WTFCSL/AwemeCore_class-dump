//
//     Generated by private class-dump
//

@class NSString, NSIndexPath, NSArray;

@interface ACCTextReaderSoundEffectsSelectionBottomCollectionViewViewModel : NSObject {
    NSIndexPath *_selectedIndexPath;
    NSString *_audioText;
    NSString *_originalSpeakerID;
    NSArray *_cellModels;
}

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (copy, nonatomic) NSString *audioText;
@property (copy, nonatomic) NSString *originalSpeakerID;
@property (copy, nonatomic) NSArray *cellModels;

- (id)cellModels;
- (void)setCellModels:(id)arg0;
- (void)setAudioText:(id)arg0;
- (void)setOriginalSpeakerID:(id)arg0;
- (void)fetchTextReaderTimbreListWithCompletion:(id /* block */)arg0;
- (id)audioText;
- (id)originalSpeakerID;
- (void)useDefaultSpeaker;
- (id)init;
- (void).cxx_destruct;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg0;

@end