//
//     Generated by private class-dump
//

@class UrlStructV2, NSString, LabelCommentStructV2, LabelIconStructV2, NSMutableArray, IconsStructV2;

@interface RelationDynamicLableStructV2 : GPBMessage

@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL hasNickname;
@property (copy, nonatomic) NSString *labelInfo;
@property (nonatomic) BOOL hasLabelInfo;
@property (nonatomic) int count;
@property (nonatomic) BOOL hasCount;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int showType;
@property (nonatomic) BOOL hasShowType;
@property (copy, nonatomic) NSString *labelInfoColor;
@property (nonatomic) BOOL hasLabelInfoColor;
@property (copy, nonatomic) NSString *labelInfoBackgroundColor;
@property (nonatomic) BOOL hasLabelInfoBackgroundColor;
@property (retain, nonatomic) UrlStructV2 *labelInfoBackgroundImg;
@property (nonatomic) BOOL hasLabelInfoBackgroundImg;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *labelInfoBackgroundImgStretchPosition;
@property (nonatomic) BOOL hasLabelInfoBackgroundImgStretchPosition;
@property (copy, nonatomic) NSString *labelTag;
@property (nonatomic) BOOL hasLabelTag;
@property (copy, nonatomic) NSString *labelType;
@property (nonatomic) BOOL hasLabelType;
@property (nonatomic) long long tagId;
@property (nonatomic) BOOL hasTagId;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) int subType;
@property (nonatomic) BOOL hasSubType;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL hasLogExtra;
@property (retain, nonatomic) LabelIconStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) LabelCommentStructV2 *comment;
@property (nonatomic) BOOL hasComment;
@property (retain, nonatomic) IconsStructV2 *iconList;
@property (nonatomic) BOOL hasIconList;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) BOOL hasShowArrow;

+ (id)descriptor;

@end
