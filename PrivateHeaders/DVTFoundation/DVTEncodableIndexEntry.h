//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface DVTEncodableIndexEntry : NSObject
{
    id <DVTPropertyListEncoding> _indexedItem;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) id <DVTPropertyListEncoding> indexedItem; // @synthesize indexedItem=_indexedItem;
- (void).cxx_destruct;
- (id)initWithIndexedItem:(id)arg1 timestamp:(double)arg2;

@end

