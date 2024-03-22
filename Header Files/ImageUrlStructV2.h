//
//     Generated by private class-dump
//

@class NSString, VideoStructV2, ImageExtraStructV2, NSMutableArray;

@interface ImageUrlStructV2 : GPBMessage

@property (copy, nonatomic) NSString *uri;
@property (nonatomic) BOOL hasUri;
@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;
@property (retain, nonatomic) NSMutableArray *downloadURLListArray;
@property (readonly, nonatomic) unsigned long long downloadURLListArray_Count;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (retain, nonatomic) NSMutableArray *maskURLListArray;
@property (readonly, nonatomic) unsigned long long maskURLListArray_Count;
@property (retain, nonatomic) VideoStructV2 *video;
@property (nonatomic) BOOL hasVideo;
@property (nonatomic) int index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) int clipType;
@property (nonatomic) BOOL hasClipType;
@property (nonatomic) int imageType;
@property (nonatomic) BOOL hasImageType;
@property (retain, nonatomic) NSMutableArray *interactionStickersArray;
@property (readonly, nonatomic) unsigned long long interactionStickersArray_Count;
@property (retain, nonatomic) ImageExtraStructV2 *imageExtra;
@property (nonatomic) BOOL hasImageExtra;
@property (nonatomic) BOOL readText;
@property (nonatomic) BOOL hasReadText;
@property (copy, nonatomic) NSString *imageStickerId;
@property (nonatomic) BOOL hasImageStickerId;

+ (id)descriptor;

@end
