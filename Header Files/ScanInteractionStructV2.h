//
//     Generated by private class-dump
//

@class NSString, UrlStructV2;

@interface ScanInteractionStructV2 : GPBMessage

@property (retain, nonatomic) UrlStructV2 *srcImage;
@property (nonatomic) BOOL hasSrcImage;
@property (copy, nonatomic) NSString *species;
@property (nonatomic) BOOL hasSpecies;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL hasLabel;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *crop;
@property (nonatomic) BOOL hasCrop;
@property (nonatomic) int cropIndex;
@property (nonatomic) BOOL hasCropIndex;
@property (copy, nonatomic) NSString *labelId;
@property (nonatomic) BOOL hasLabelId;
@property (nonatomic) double prob;
@property (nonatomic) BOOL hasProb;
@property (copy, nonatomic) NSString *wikiId;
@property (nonatomic) BOOL hasWikiId;

+ (id)descriptor;

@end
