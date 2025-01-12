//
//     Generated by private class-dump
//

@class NSArray;

@interface IESMMBYTEVC1Configuration : IESMMCodecConfiguration {
    unsigned char _configurationVersion;
    unsigned char _generalProfileSpace;
    unsigned char _generalTierFlag;
    unsigned char _generalProfileIDC;
    unsigned char _generalLevelIDC;
    unsigned char _parallelismType;
    unsigned char _chromaFormat;
    unsigned char _bitDepthLumaMinus8;
    unsigned char _bitDepthChromaMinus8;
    unsigned char _constantFrameRate;
    unsigned char _numTemporalLayers;
    unsigned char _temporalIdNested;
    unsigned char _lengthSizeMinusOne;
    unsigned char _numOfSequenceParameterSets;
    unsigned char _numOfPictureParameterSets;
    unsigned char _numOfVideoParameterSets;
    unsigned short _minSpatialSegmentationIDC;
    unsigned short _avgFrameRate;
    unsigned int _generalProfileCompatibilityFlags;
    unsigned long long _generalConstraintInicatorFlags;
    NSArray *_sequenceParameterSetsArray;
    NSArray *_pictureParameterSetsArray;
    NSArray *_videoParameterSetsArray;
}

@property (nonatomic) unsigned char configurationVersion;
@property (nonatomic) unsigned char generalProfileSpace;
@property (nonatomic) unsigned char generalTierFlag;
@property (nonatomic) unsigned char generalProfileIDC;
@property (nonatomic) unsigned int generalProfileCompatibilityFlags;
@property (nonatomic) unsigned long long generalConstraintInicatorFlags;
@property (nonatomic) unsigned char generalLevelIDC;
@property (nonatomic) unsigned short minSpatialSegmentationIDC;
@property (nonatomic) unsigned char parallelismType;
@property (nonatomic) unsigned char chromaFormat;
@property (nonatomic) unsigned char bitDepthLumaMinus8;
@property (nonatomic) unsigned char bitDepthChromaMinus8;
@property (nonatomic) unsigned short avgFrameRate;
@property (nonatomic) unsigned char constantFrameRate;
@property (nonatomic) unsigned char numTemporalLayers;
@property (nonatomic) unsigned char temporalIdNested;
@property (nonatomic) unsigned char lengthSizeMinusOne;
@property (nonatomic) unsigned char numOfSequenceParameterSets;
@property (retain, nonatomic) NSArray *sequenceParameterSetsArray;
@property (nonatomic) unsigned char numOfPictureParameterSets;
@property (retain, nonatomic) NSArray *pictureParameterSetsArray;
@property (nonatomic) unsigned char numOfVideoParameterSets;
@property (retain, nonatomic) NSArray *videoParameterSetsArray;

- (void)setLengthSizeMinusOne:(unsigned char)arg0;
- (void)setNumOfSequenceParameterSets:(unsigned char)arg0;
- (unsigned char)numOfSequenceParameterSets;
- (void)setSequenceParameterSetsArray:(id)arg0;
- (void)setNumOfPictureParameterSets:(unsigned char)arg0;
- (unsigned char)numOfPictureParameterSets;
- (void)setPictureParameterSetsArray:(id)arg0;
- (id)sequenceParameterSetsArray;
- (id)pictureParameterSetsArray;
- (id)initWithCFDataRef:(struct __CFData { } *)arg0;
- (id)getCodecConfigKey;
- (unsigned char)lengthSizeMinusOne;
- (void)setGeneralProfileSpace:(unsigned char)arg0;
- (void)setGeneralTierFlag:(unsigned char)arg0;
- (void)setGeneralProfileIDC:(unsigned char)arg0;
- (void)setGeneralProfileCompatibilityFlags:(unsigned int)arg0;
- (void)setGeneralConstraintInicatorFlags:(unsigned long long)arg0;
- (void)setGeneralLevelIDC:(unsigned char)arg0;
- (void)setMinSpatialSegmentationIDC:(unsigned short)arg0;
- (void)setParallelismType:(unsigned char)arg0;
- (void)setChromaFormat:(unsigned char)arg0;
- (void)setBitDepthLumaMinus8:(unsigned char)arg0;
- (void)setBitDepthChromaMinus8:(unsigned char)arg0;
- (void)setAvgFrameRate:(unsigned short)arg0;
- (void)setConstantFrameRate:(unsigned char)arg0;
- (void)setTemporalIdNested:(unsigned char)arg0;
- (void)setVideoParameterSetsArray:(id)arg0;
- (unsigned char)numOfVideoParameterSets;
- (id)videoParameterSetsArray;
- (unsigned char)generalProfileSpace;
- (unsigned char)generalTierFlag;
- (unsigned int)generalProfileCompatibilityFlags;
- (unsigned long long)generalConstraintInicatorFlags;
- (unsigned short)minSpatialSegmentationIDC;
- (unsigned char)parallelismType;
- (unsigned char)chromaFormat;
- (unsigned char)bitDepthLumaMinus8;
- (unsigned char)bitDepthChromaMinus8;
- (unsigned short)avgFrameRate;
- (unsigned char)constantFrameRate;
- (unsigned char)temporalIdNested;
- (void)setNumOfVideoParameterSets:(unsigned char)arg0;
- (unsigned char)generalProfileIDC;
- (unsigned char)generalLevelIDC;
- (unsigned char)configurationVersion;
- (id)init;
- (void).cxx_destruct;
- (void)setConfigurationVersion:(unsigned char)arg0;
- (unsigned char)numTemporalLayers;
- (void)setNumTemporalLayers:(unsigned char)arg0;

@end
