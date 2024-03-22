//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary, NSString;

@interface AWEHPTopTabItemModel : MTLModel <MTLJSONSerializing> {
    BOOL _deletable;
    BOOL _movable;
    NSString *_channelType;
    NSString *_channelID;
    NSString *_title;
    NSString *_referString;
    NSDictionary *_channelInfo;
    unsigned long long _editDragType;
    NSNumber *_dragType;
    NSDictionary *_extra;
}

@property (nonatomic) BOOL movable;
@property (retain, nonatomic) NSNumber *dragType;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *channelType;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *channelInfo;
@property (nonatomic) BOOL deletable;
@property (nonatomic) unsigned long long editDragType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)referString;
- (void)setExtra:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setDragType:(id)arg0;
- (void)setChannelInfo:(id)arg0;
- (unsigned long long)editDragType;
- (BOOL)movable;
- (void)setEditDragType:(unsigned long long)arg0;
- (void)setMovable:(BOOL)arg0;
- (id)channelType;
- (id)channelID;
- (void).cxx_destruct;
- (id)extra;
- (id)title;
- (void)setChannelID:(id)arg0;
- (void)setTitle:(id)arg0;
- (BOOL)deletable;
- (void)setDeletable:(BOOL)arg0;
- (id)channelInfo;
- (void)setChannelType:(id)arg0;
- (id)dragType;

@end
