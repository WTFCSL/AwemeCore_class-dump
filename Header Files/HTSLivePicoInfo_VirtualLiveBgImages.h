//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLivePicoInfo_VirtualLiveBgImages : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *originalImage;
@property (nonatomic) BOOL hasOriginalImage;
@property (copy, nonatomic) NSString *originalDigest;
@property (nonatomic) BOOL isUpright;
@property (retain, nonatomic) NSMutableArray *convertedImagesArray;
@property (readonly, nonatomic) unsigned long long convertedImagesArray_Count;
@property (retain, nonatomic) NSMutableArray *convertedListArray;
@property (readonly, nonatomic) unsigned long long convertedListArray_Count;

+ (id)descriptor;

@end
