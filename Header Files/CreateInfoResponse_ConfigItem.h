//
//     Generated by private class-dump
//

@class CreateInfoResponse_Bubble, NSString, HTSLiveToolbarItem, HTSLiveImage, GPBInt32Array, NSMutableArray;

@interface CreateInfoResponse_ConfigItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveToolbarItem *item;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int order;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSMutableArray *excludedByOtherItemsArray;
@property (readonly, nonatomic) unsigned long long excludedByOtherItemsArray_Count;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *subText;
@property (nonatomic) BOOL switchStatus;
@property (retain, nonatomic) NSMutableArray *subItemsArray;
@property (readonly, nonatomic) unsigned long long subItemsArray_Count;
@property (retain, nonatomic) HTSLiveImage *innerIcon;
@property (nonatomic) BOOL hasInnerIcon;
@property (retain, nonatomic) HTSLiveImage *selectedIcon;
@property (nonatomic) BOOL hasSelectedIcon;
@property (copy, nonatomic) NSString *panelName;
@property (retain, nonatomic) GPBInt32Array *showInSubTabsArray;
@property (readonly, nonatomic) unsigned long long showInSubTabsArray_Count;
@property (nonatomic) int dotType;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) CreateInfoResponse_Bubble *bubble;
@property (nonatomic) BOOL hasBubble;

+ (id)descriptor;

- (BOOL)selected;
- (id)item;
- (void)setSelected:(BOOL)arg0;
- (void)setItem:(id)arg0;
- (id)displayIcon;

@end